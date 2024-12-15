#include<stdio.h>
#include<stdlib.h>

struct list {
        int data;
        struct list *next;
    };

struct list *delete_from_list(struct list *ptr)
{
    
    struct list*even,*odd,*h_even,*h_odd;
    //�w�qeven��odd�A���O�O�s��_�ƻP���ƪ��쵲��C�C
    h_even = (struct list*)malloc(sizeof(struct list));
    even = h_even;
    h_odd = (struct list*)malloc(sizeof(struct list));
    odd = h_odd;
    //�����O�ʺA�O����t�m���Ĥ@��C
    for(ptr ; ptr != NULL ; ptr = ptr->next){
        //�j��q�Ĥ@��}�l�@����ptr���VNULL����C
        if(ptr->data % 2 == 0){
            //�p�Gptr���V��data % 2 �� 0�A�N��even���V�ӭȡC
            even->data = ptr->data;
            even->next = (struct list*)malloc(sizeof(struct list));
            even = even->next;
            free(ptr);
            //�̫�Nptr free��
        }else{
            //�p�Gptr���V��data % 2 ���� 0�A�N��odd���V�ӭȡC
            odd->data = ptr->data;
            odd->next = (struct list*)malloc(sizeof(struct list));
            odd = odd->next;
            free(ptr);
            //�̫�Nptr free��
        }
    }
    even = NULL;
    odd = NULL;
    //�]���{�b��even��odd���O�̫�@�쪺odd->next even->next�A�ҥH�o�����L�̫��VNULL�C
    even = h_even;
    odd = h_odd;
    //�Neven�Modd���s���V�Ĥ@��(h_even�Mh_odd)
    printf("\n-----------------�x�s���ƪ��쵲��C-----------------\n");
    for(even ; even->next!= NULL ; even = even->next){
        printf("%d  ",even->data);
    }

    printf("\n-----------------�x�s��ƪ��쵲��C-----------------\n");
    for(odd ; odd->next!= NULL ; odd = odd->next){
        printf("%d  ",odd->data);
    }

    return ptr;
}


int main(){
    
    struct list *ptr,*head;
    head = (struct list*)malloc(sizeof(struct list));
    ptr = head;
    for(int i = 0; i <16 ; i++){
        if(i == 15){
            ptr->data = i;
            ptr->next = NULL;
            break;
        }
        ptr->data = i;
        ptr->next = (struct list*)malloc(sizeof(struct list));
        ptr = ptr->next;
    }
    ptr = head;
    printf("-----------------���쵲��C���e-----------------\n");
    for(ptr; ptr != NULL ; ptr = ptr->next){
        printf("%d  ",ptr->data);
    }
    ptr = head;
    delete_from_list(ptr);
}