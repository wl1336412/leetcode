bool validPath(int n, int** edges, int edgesSize, int* edgesColSize, int source, int destination) {
    bool* ret=(bool*)malloc(sizeof(bool)*n);
    int i,x,y,ct,pt,*nb=(int*)malloc(sizeof(int)*n);
    struct ListNode** neighbors,*nodex,*nodey,*p;
    memset(ret,0,sizeof(bool)*n);
    neighbors=(struct ListNode**)malloc(sizeof(void*)*n);
    for(i=0;i<n;i++){
        neighbors[i]=NULL;
        nb[i]=-1;
    }
    for(i=0;i<edgesSize;i++){
        x=edges[i][0],y=edges[i][1];
        nodex=(struct ListNode*)malloc(sizeof(struct ListNode));
        nodey=(struct ListNode*)malloc(sizeof(struct ListNode));
        nodex->val=x;
        nodex->next=neighbors[y];
        neighbors[y]=nodex;
        nodey->val=y;
        nodey->next=neighbors[x];
        neighbors[x]=nodey;
    }
    ct=0;
    nb[0]=source;
    pt=1;
    while(nb[ct]!=-1){
        p=neighbors[nb[ct++]];
        while(p!=NULL){
            i=p->val;
            if(ret[i]==false&&pt<n){
                nb[pt++]=p->val;
            }
            ret[i]=true;
            p=p->next;
        }
        if(ct==n){
            break;
        }
    }
    return ret[destination];
}