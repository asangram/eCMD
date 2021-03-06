/* IBM_PROLOG_BEGIN_TAG                                                   */
/* 
 * Copyright 2017 IBM International Business Machines Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * 	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* IBM_PROLOG_END_TAG                                                     */
/// @file plat_mbvpd_access.H
///
/// @brief Platform Memory Buffer access definitions
///

#ifndef _FAPI2_PLAT_MBVPD_ACCESS_H_
#define _FAPI2_PLAT_MBVPD_ACCESS_H_

#include <fapi2_mbvpd_access.H>

namespace fapi2plat
{
fapi2::ReturnCode getMBvpdField(const fapi2::MBvpdRecord i_record,
                                const fapi2::MBvpdKeyword i_keyword,
                                const fapi2::Target<fapi2::TARGET_TYPE_MEMBUF_CHIP>& i_target,
                                uint8_t* const i_pBuffer,
                                size_t& io_fieldSize);

fapi2::ReturnCode setMBvpdField(const fapi2::MBvpdRecord i_record,
                                const fapi2::MBvpdKeyword i_keyword,
                                const fapi2::Target<fapi2::TARGET_TYPE_MEMBUF_CHIP>& i_target,
                                const uint8_t* const i_pBuffer,
                                const size_t i_fieldSize);
}

namespace fapi2
{

inline fapi2::ReturnCode getMBvpdField(const fapi2::MBvpdRecord i_record,
                                       const fapi2::MBvpdKeyword i_keyword,
                                       const fapi2::Target<fapi2::TARGET_TYPE_MEMBUF_CHIP>& i_target,
                                       uint8_t* const i_pBuffer,
                                       size_t& io_fieldSize)
{
    fapi2::ReturnCode l_rc = fapi2::FAPI2_RC_SUCCESS;
    l_rc = fapi2plat::getMBvpdField(i_record, i_keyword, i_target, i_pBuffer, io_fieldSize);
    return l_rc;
}

inline fapi2::ReturnCode setMBvpdField(const fapi2::MBvpdRecord i_record,
                                       const fapi2::MBvpdKeyword i_keyword,
                                       const fapi2::Target<fapi2::TARGET_TYPE_MEMBUF_CHIP>& i_target,
                                       const uint8_t* const i_pBuffer,
                                       const size_t i_fieldSize)
{
    fapi2::ReturnCode l_rc = fapi2::FAPI2_RC_SUCCESS;
    l_rc = fapi2plat::setMBvpdField(i_record, i_keyword, i_target, i_pBuffer, i_fieldSize);
    return l_rc;
}

};

#endif
