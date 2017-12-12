int * positive(unsigned * posEls, const int ar[], unsinged els) {
  int pos = 0;
  
  for (unsigned i = 0; i < els; i++){
    if(ar[i] > 0)
      pos++;
     *posEls = pos;
     }
  int *ret = malloc(pos*sizeof(*ret));
    for(unsigned i = 0, i < elks; i++){
      if(ar[i] > 0) {
      ret[i] = ar[i];
      }
     }
    return ret;
}

void triple (int * * ptr, unsigned oldEls){
  int *ret = malloc(oldEls*sizeof(*ret));
  for (unsigned i = 0; i < oldEls; i++) {
    ret[i] = i;
    printf(" %i\n", ret[i]);
    }
    ret = realloc(ret,(oldEls*3)*sizeof(*ret));
    for (unsigned i = 0; i < oldEls; i++){
      ret[i] = i;
      printf(" %i", ret[i]);
      }
    }
   int die (const char*msg){
   } 
