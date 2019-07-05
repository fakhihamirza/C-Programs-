#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void sort(int x){
int a[100],i,j,t,temp;
FILE *fp;
fp=fopen("Marks.txt","a");
if(fp==NULL){
	printf("Sorry ! New Marks Can Not Be Added Because The File Is Not Opening.");
}
fprintf(fp,"%d\n",x);
fclose(fp);

fp=fopen("Marks.txt","r");
if(fp==NULL){
	printf("Sorry ! File Data Can't Be Read.");
}
i=0,t=0;
while(!feof(fp)){
	fscanf(fp,"%d",&a[i]);
	i++;
	t++;
}
fclose(fp);

for(i=0;i<t;i++){
	for(j=i+1;j<t;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}



fp=fopen("Marks.txt","w");
if(fp==NULL){
	printf("Sorry ! Marks Can Not Be Sorted Because The File Is Not Opening.");
}
i=0;
while(i<t){
	fprintf(fp,"%d\n",a[i]);
	i++;
}
fclose(fp);


}


int main(){
int x;
printf("Enter New Marks Of New Student To Sort Data Of The Students A/C To Marks :");
scanf("%d",&x);
sort(x);
}
