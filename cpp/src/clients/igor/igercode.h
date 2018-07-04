
#ifndef __IGERCODE_H
#define __IGERCODE_H

//-------------------------------------------------------------------------
/* Error codes */

//#define FIRST_ERR_IGINTERF 53000

//#ifndef FIRST_XOP_ERR
//#define FIRST_XOP_ERR FIRST_ERR_IGINTERF
//#endif

#define OLD_IGOR FIRST_XOP_ERR + 1
#define NON_EXISTENT_WAVE FIRST_XOP_ERR + 2
#define NEEDS_3D_WAVE FIRST_XOP_ERR + 3
#define MEMORY_ALLOCATION_FAILURE FIRST_XOP_ERR + 4
#define ERROR_IN_READING_NUMBER_FROM_TEXT_WAVE FIRST_XOP_ERR + 5
#define TEXT_WAVE_REQUIRED FIRST_XOP_ERR + 6 
#define TEXT_WAVE_1D_REQUIRED FIRST_XOP_ERR + 7
#define SR_COMP_PROC_ABORTED FIRST_XOP_ERR + 8 
#define NT_FP32_OR_NT_FP64_WAVE_REQUIRED FIRST_XOP_ERR + 9
#define ZERO_NUMBER_OF_ELEM_IN_WAVE FIRST_XOP_ERR + 10
#define THREE_ELEM_NUM_WAVE_REQUIRED FIRST_XOP_ERR + 11
#define NT_FP64_WAVE_REQUIRED FIRST_XOP_ERR + 12
#define TOO_SHORT_WAVE FIRST_XOP_ERR + 13
#define NEEDS_2D_WAVE FIRST_XOP_ERR + 14
#define NEEDS_1D_OR_2D_WAVE FIRST_XOP_ERR + 15
#define THREE_COL_NUM_WAVE_REQUIRED FIRST_XOP_ERR + 16
#define INCOMPATIBLE_WAVE_LENGTHS FIRST_XOP_ERR + 17
#define NUMERIC_WAVE_REQUIRED FIRST_XOP_ERR + 18
#define WAVES_OF_EQUAL_DIMS_ARE_EXPECTED FIRST_XOP_ERR + 19
#define TEXT_WAVE_2D_REQUIRED FIRST_XOP_ERR + 20
#define NT_CMPLX_WAVE_REQUIRED FIRST_XOP_ERR + 21

//-------------------------------------------------------------------------

#endif
