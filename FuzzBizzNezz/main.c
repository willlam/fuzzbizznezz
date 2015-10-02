//
//  main.c
//  FuzzBizzNezz
//
//  Created by William Lam on 2015-09-30.
//  Copyright © 2015 William Lam. All rights reserved.
//

#include <stdio.h>

void fuzzBizzNezz(int fuzz, int bizz, int nezz) {
  for (int i = 1; i <= nezz; i++) {
    if (i % fuzz == 0 && i % bizz == 0) {
      printf("FuzzBizz\n");
    } else if (i % fuzz == 0) {
      printf("Fuzz\n");
    } else if (i % bizz== 0) {
      printf("Bizz\n");
    } else {
      printf("%d\n", i);
    }
  }
}


int main() {
  
  int fuzz, bizz, nezz;
  printf("Please input three integers for 'Fuzz', 'Bizz' and 'Nezz': \n");
  scanf("%d %d %d", &fuzz, &bizz, &nezz);
  printf("Integer for 'Fuzz' is %d\n", fuzz);
  printf("Integer for 'Bizz' is %d\n", bizz);
  printf("Integer for 'Nezz' is %d\n", nezz);
  
  fuzzBizzNezz(fuzz, bizz, nezz);

  
  return 0;
}
