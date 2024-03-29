#ifndef common_definitions_header
#define common_definitions_header


// memory definitions
#define DIRECTORY_TABLE_MEMORY_LOCATION 0xd00000
#define PAGE_TABLES_MEMORY_LOCATION 0xe00000
#define KERNEL_STACK_MEMORY_LOCATION 0x50000000 //interrupts - defined in the tss
#define USER_STACK_MEMORY_LOCATION 0x20000000
#define MALLOC_MEMORY_LOCATION 0x60000000 // memory for malloc functions.
#define MUTEX_MEMORY_LOCATION 0x70000000 // memory for mutex functions.
#define KERNEL_FUNCTION_MEMORY_LOCATION 0xd000
#define MAIN_FUNCTION_STACK_MEMORY_LOCATION 0x16000 // defined in switch_to_pm.asm
#define SCREEN_MMIO_LOCATION 0xb8000

//PIC definitions
#define PIC1_COMMAND 0x20
#define PIC1_DATA 0x21
#define PIC2_COMMAND 0xA0
#define PIC2_DATA 0xA1

//task definitions
#define MAX_TASKS 10
#define MAX_USER_TASKS 9
#define LAST_USER_TASK_ID MAX_USER_TASKS-1
#define IDLE_TASK_ID 9
#define MAX_OWNED_MUTEX_PER_TASK 3
#define MOCK_TASK 77
typedef enum task_status{  alive=1,  waiting=2,  dead=0  } task_status;

//syscalls definitions
#define SYS_CALL_SUCCESS 0
#define SYS_CALL_ERR -1
#define INTERNAL_SUCCESS 0
#define INTERNAL_ERROR -1
typedef int32_t status;


//mutex definitions
typedef uint32_t * mutex_ptr;
#define MAX_OVERALL_MUTEXES 15
#define UNINITIALIZED_MUTEX -2
#define INITIALIZED_MUTEX -1

//timer definition
#define TIMER_TICKS_PER_SECOND 20

//global definitions
typedef enum flag_t{FALSE=0,TRUE=1} flag_t;

#endif
