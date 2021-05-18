#include <stdio.h>

int main() {
        int status;
        char fname[20];

        printf(" Input the name of file to delete : ");
        scanf("%s", fname);
        status = remove(fname);
        if(status == 0)
                printf(" The file %s is deleted successfully..!!\n", fname);
        else
                printf(" Unable to delete file %s\n", fname);
        return 0;
}
