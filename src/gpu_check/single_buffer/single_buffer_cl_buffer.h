/********************************************************************************
 * Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ********************************************************************************/


/*! \file single_buffer_cl_buffer.h
 */

#ifndef __SINGLE_BUFFER_CL_BUFFER_H
#define __SINGLE_BUFFER_CL_BUFFER_H

#include <stdint.h>
#include <CL/cl.h>

#include "meta_data_lists/cl_kernel_lists.h"

/*!
 * call this function to verify cl_mem buffer and svm canary regions
 *
 * \param kern_ctx
 *      use this context
 * \param cmd_queue
 *      use this queue
 * \param num_buff
 *      verify this many cl_mem buffers
 * \param buffer_ptrs
 *      array of cl_mem
 * \param kern_info
 *      work kernel information
 * \param dupe
 *      duplicate arguments list
 * \param evt
 *      wait on this event
 * \param is_svm
 *      buffers are svm
 * \param ret_evt
 *      return this finish event
 */
void verify_cl_buffer_single(cl_context kern_ctx, cl_command_queue cmd_queue,
        uint32_t num_buff, void **buffer_ptrs, kernel_info *kern_info,
        uint32_t *dupe, const cl_event *evt, int is_svm, cl_event *ret_evt);

#endif // __SINGLE_BUFFER_CL_BUFFER_H
