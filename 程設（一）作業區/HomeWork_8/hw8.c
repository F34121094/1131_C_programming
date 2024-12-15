#include<stdio.h>
#include<stdlib.h>

struct list {
        int data;
        struct list *next;
    };

struct list *delete_from_list(struct list *ptr)
{
    
    struct list*even,*odd,*h_even,*h_odd;
    //定義even及odd，分別是存放奇數與偶數的鏈結串列。
    h_even = (struct list*)malloc(sizeof(struct list));
    even = h_even;
    h_odd = (struct list*)malloc(sizeof(struct list));
    odd = h_odd;
    //先分別動態記憶體配置給第一位。
    for(ptr ; ptr != NULL ; ptr = ptr->next){
        //迴圈從第一位開始一直到ptr指向NULL停止。
        if(ptr->data % 2 == 0){
            //如果ptr指向的data % 2 為 0，就讓even指向該值。
            even->data = ptr->data;
            even->next = (struct list*)malloc(sizeof(struct list));
            even = even->next;
            free(ptr);
            //最後將ptr free掉
        }else{
            //如果ptr指向的data % 2 不為 0，就讓odd指向該值。
            odd->data = ptr->data;
            odd->next = (struct list*)malloc(sizeof(struct list));
            odd = odd->next;
            free(ptr);
            //最後將ptr free掉
        }
    }
    even = NULL;
    odd = NULL;
    //因為現在的even跟odd都是最後一位的odd->next even->next，所以這邊讓他們指向NULL。
    even = h_even;
    odd = h_odd;
    //將even和odd重新指向第一位(h_even和h_odd)
    printf("\n-----------------儲存雙數的鏈結串列-----------------\n");
    for(even ; even->next!= NULL ; even = even->next){
        printf("%d  ",even->data);
    }

    printf("\n-----------------儲存單數的鏈結串列-----------------\n");
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
    printf("-----------------原鏈結串列內容-----------------\n");
    for(ptr; ptr != NULL ; ptr = ptr->next){
        printf("%d  ",ptr->data);
    }
    ptr = head;
    delete_from_list(ptr);
}