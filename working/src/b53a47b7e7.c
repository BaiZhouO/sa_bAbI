#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_2 = 30;                           // Tag.BODY
    char entity_7[15];                       // Tag.BODY
    if(entity_0 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 39;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_0] = 'g';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER