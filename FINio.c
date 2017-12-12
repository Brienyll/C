int main(){
  FILE *finPtr;
  char *fIn = "input.txt";
  fopen_s(&finPtr, "C:\\input.txt", "r") && die("File Open Failure");
  FILE *fourPtr;
  char* fOut = "output.txt";
  fopen_s(&foutPtr, "C:\\input.txt", "w") && die("File Open Failure");
  int rc;
  unsigned len = 0;
  int buffer[100];
  int temp[100];
  
  for (unsigned i = 0; !feof(finPtr); i++){
    rc = fgetc(finPtr);
    buffer[i] = rc;
    temp[i] =buffer[i];
    len++;
    fputc(buffer[i], foutPtr);
    fputc(buffer[i], foutPtr);
    }
    fclose(finPtr);
    fclose(foutPtr);
  }
  
  int die (const char * msg) {
    printf("Fatal Error: %s", msg);
    exit(EXIT_FAILURE);
    }
