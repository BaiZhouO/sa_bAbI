#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_7[69];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 89;                           // Tag.BODY
    entity_2 = 12;                           // Tag.BODY
    if(entity_6 < entity_2){                 // Tag.BODY
    entity_6 = 4;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 77;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_6] = '6';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER