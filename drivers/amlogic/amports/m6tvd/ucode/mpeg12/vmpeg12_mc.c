/*
 * AMLOGIC Audio/Video streaming port driver.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the named License,
 * or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Author:  Tim Yao <timyao@amlogic.com>
 *
 */

#include <linux/types.h>

const u32 vmpeg12_mc[] __attribute__((aligned(8))) = {
	0x680f801,0x6800000,0xd000001,0x7400040,0xc011080,0x0000000,0x80c0002,0x80c2900,
	0x6bffc00,0x7c00440,0x6030400,0x0400000,0xc012e80,0x0000000,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0xc7ffe40,0x0000000,0x0000000,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,
	0xc795e40,0x0000000,0xc7919c0,0x0000000,0xc780480,0x64c0007,0xc7921c0,0x0000000,
	0xc79a9c0,0x0000000,0xc791740,0x0000000,0xcc00000,0x0400000,0xcc00000,0x0400000,
	0xcc00000,0x0400000,0x0800000,0x7800449,0xc7fff00,0x6030409,0x6bffd89,0x6030409,
	0x0400000,0xa2e4047,0x64c4609,0x6802008,0x64c4309,0xb405209,0x6800008,0x6800048,
	0xc7ffc80,0x7c00e88,0x7c00e88,0x78001c9,0xaa14009,0xa608049,0xc78d400,0xa608089,
	0xc78c4c0,0xa214807,0xc783c00,0x0000000,0xc78fbc0,0x0000000,0x7800787,0xb6f7fc7,
	0x7c00047,0x7800747,0x64c2908,0xbee4808,0x7c00007,0x80c2841,0x7800188,0x64c2807,
	0xa2fc047,0x5801347,0xa61400d,0x0000000,0x80c2800,0xc7ff540,0x80c0002,0xaa0c008,
	0xc780840,0x0000000,0xaa0c04d,0xc78f600,0x0000000,0x80c2802,0x64c2807,0xa2fc047,
	0x58011c7,0x7c00607,0x80c2800,0x7800688,0xa60c008,0x6800008,0xfc01200,0x7c006c8,
	0x94a11c8,0xa210407,0x60c2c07,0xfc05200,0x60c0a08,0x7800708,0xaa10008,0x80c2800,
	0xc780dc0,0x0000000,0x80c2a00,0xc0148c0,0x80c0004,0xc0165c0,0x0000000,0xc7fecc0,
	0x0000000,0x6800009,0x7c03e49,0xaa2404d,0x6800008,0x7800588,0xa614008,0xc011940,
	0x80c2c00,0xc7ffe00,0x440134d,0x6800008,0x7c00588,0x80c2802,0x64c2807,0xa2fc047,
	0x58011c7,0x7c00607,0x6800009,0x7800688,0xaa30048,0xa21c307,0x80c2800,0xfc02280,
	0xa61000a,0x7c0064a,0xc7fe600,0x80c0002,0xaa10088,0xa20c0c7,0x0000000,0xfc01240,
	0x7c006c9,0x4000287,0x94a1289,0x7800649,0x94c2289,0x60c2c0a,0xa210407,0x80c2800,
	0xfc05200,0x60c0a08,0xa24c047,0x7800708,0xa60c008,0xc781000,0x80c2800,0x78004c8,
	0xaa0c0c8,0x6800088,0x6800048,0x64c2c09,0x94c2248,0x60c2c09,0x80c2a00,0xc0139c0,
	0x80c0000,0xc0156c0,0x0000000,0xc7fddc0,0x0000000,0x7800008,0x7c06108,0x80c2800,
	0x80c2a00,0xc0137c0,0x80c0000,0x0000000,0x64c2908,0x0000000,0xbe42008,0x0000000,
	0x64c0008,0x4841208,0xa6e5048,0x7800008,0xa620008,0x4401208,0x7800049,0xaa14009,
	0x6800008,0x4401249,0x7c00049,0x7806188,0xc7fd780,0x7c00008,0x64c1008,0x7c03c08,
	0x64c1108,0x7c03c48,0x64c1208,0x7c03c88,0x64c1308,0x7c03cc8,0x64c1408,0x7c03d08,
	0x64c1508,0x7c03d48,0x64c1608,0x7c03d88,0x64c1708,0x7c03dc8,0x7c0f808,0xc013380,
	0x0000000,0xc015640,0x0000000,0xc7fd1c0,0x0000000,0x80c2a00,0xc012c00,0x80c0004,
	0xc014900,0x0000000,0xc7fd000,0x0000000,0x0000000,0xc78d180,0x0000000,0x683ffc8,
	0x7c00748,0x78013c8,0x9808008,0x7c013c8,0x649cc09,0x4001249,0x609cc09,0x6807fc9,
	0xaa18009,0x6494707,0x91081c7,0x7800008,0xa4fc207,0x4401249,0xc000100,0x0000000,
	0xc780d40,0x0000000,0x64e0008,0x83f0040,0x83f0000,0x6490b07,0x9807007,0x9807087,
	0x98073c7,0x6090b07,0x9c07007,0x9c07087,0x9c073c7,0x6090b07,0x683ffc9,0x6498f07,
	0xaa0c009,0xa6f8007,0x4401249,0x6498e07,0x9807007,0x9807607,0x9807647,0x9807687,
	0x9807747,0x6098e07,0x9c07007,0x9c07607,0x9c07647,0x9c07687,0x9c07747,0x6098e07,
	0x64c0007,0x9c07187,0x9807207,0x60c0007,0x64c0807,0x9807347,0x60c0807,0x83f0040,
	0x83f0000,0x8090b65,0x0000000,0x8090b60,0xcc00000,0x60e0008,0xc796880,0x0000000,
	0xc78c0c0,0x0000000,0xa20d007,0xc7fef00,0x0000000,0xfc081c0,0x46b3207,0xc502280,
	0x7803e89,0xaadc009,0x46b8207,0xc57fcc0,0x46b5207,0xc503440,0x4600207,0xc5067c0,
	0x46b2207,0xc504940,0x46b7207,0xc505cc0,0x7800888,0xaaac008,0x7800788,0xaaa7fc8,
	0x7801688,0xac0d207,0xa807207,0x6800048,0x7c018c8,0x78013c8,0x9808008,0xc78b900,
	0x7c013c8,0x78018c8,0xaa10008,0x6800008,0xc78b7c0,0x7c018c8,0x7c01687,0x78000c8,
	0xacd8207,0x4401207,0x7800049,0xa804209,0x78013c9,0x9809009,0x7c013c9,0x7c06088,
	0xfc05200,0x7c060c8,0xfc01200,0xaa0c008,0xc7fff80,0xfc08200,0x80c2841,0x7800188,
	0x64c2807,0xa2fc047,0x5801347,0xa60c00d,0xc78b1c0,0x0000000,0x44011cd,0x7800009,
	0xa8041c9,0x78013c9,0x9809009,0x7c013c9,0x7c06047,0x7800748,0xa405207,0x7806087,
	0x7800788,0xa402207,0xc780e00,0x7800007,0x7806108,0xb403207,0x2408207,0x7800008,
	0xb214008,0x6800047,0xae0c288,0x6800287,0x40001c8,0x7800008,0xb4031c8,0x24081c8,
	0x6800008,0xc00f640,0x0000000,0x7800047,0x7806088,0xaa68008,0xb819207,0xac06207,
	0x7800007,0x7806048,0xb815207,0xaa08007,0xb013207,0x6807807,0x6800008,0x6808009,
	0x20091c9,0xd07ff87,0x7400248,0x7806047,0x440a1c7,0xb624007,0x7806088,0x4401208,
	0x7c00048,0x7800088,0x2008207,0xba0c008,0x6800007,0x40001c8,0x7c00007,0x7800047,
	0x7806088,0xac09207,0xb804207,0x7800007,0x7806048,0xb405207,0xc00dd80,0x0000000,
	0xc7ffdc0,0x0000000,0x6800048,0x7c00588,0x80c2c00,0x64c0108,0x9809048,0x60c0109,
	0x60c0108,0x7806048,0x7c00008,0x7806088,0x7c00048,0x78060c8,0x60c0a08,0xc7fa600,
	0x0000000,0x6a00007,0x7c00d07,0x7c03e87,0xfc0c1c0,0x609c607,0xfc0c200,0x609c708,
	0x400f1c7,0x58041c7,0x60c0907,0x7c00087,0x4401247,0x7c06189,0x400f208,0x5804208,
	0x7c000c8,0x9508207,0xfc041c0,0xfc04200,0x7c00108,0x5404208,0x2c07207,0x609c407,
	0xfc101c0,0xfc0f1c0,0x6800009,0x7c03e09,0x64e0009,0xa2fc089,0x6800008,0xa22c047,
	0x6800807,0x6800009,0x6c00049,0x60e0209,0xfc10240,0x60e0209,0x44011c7,0xaef4007,
	0x0000000,0x4c10208,0xfc011c0,0xa22c047,0x6800807,0x6800009,0x6c00049,0x60e0209,
	0xfc10240,0x60e0309,0x44011c7,0xaef4007,0x0000000,0x4c08208,0xc788f40,0x60e0008,
	0x6840047,0x60c0107,0x649c409,0x98097c9,0xfc081c0,0xfc011c0,0x9601247,0xfc021c0,
	0xfc021c0,0x9702247,0xfc021c0,0x9742247,0xfc0d1c0,0xfc091c0,0xfc021c0,0x9622247,
	0xfc051c0,0x9665247,0xc788a40,0x609c409,0xc7889c0,0xfc041c0,0xfc041c0,0xaaa4047,
	0xaa181c7,0xa63c0c7,0x64e0008,0xfc011c0,0xc7ff2c0,0x0000000,0xfc101c0,0x7c00487,
	0x58041c7,0x7800d08,0x940c207,0x7c00d08,0x7800e47,0x405b1c7,0xc788540,0x74001c8,
	0xa6b0207,0x0000000,0xfc101c0,0x60c0207,0xfc0c1c0,0x60c0307,0x9102247,0x7c004c9,
	0x7c06309,0x7803e08,0x649070b,0x980b0cb,0xa6140c9,0x5001308,0x680000c,0x6800008,
	0x9c0b0cb,0x7c03e0c,0x78004ca,0xaa140ca,0x300a30a,0x500128a,0x94e11ca,0x60c0307,
	0xa614048,0x780018a,0xa60c04a,0x0000000,0x980b10b,0x609070b,0xa6200c9,0x6800088,
	0xa215007,0x6800089,0x7c00649,0xc7800c0,0x6800048,0x6800008,0x7c00688,0x90a1207,
	0x7c00708,0xfc01240,0x7c00549,0x7800d08,0x95e1209,0x9021247,0x95c1209,0x90e1247,
	0x95a1209,0x78004c9,0xaa0c0c9,0x6800049,0x6800009,0x9581209,0x7c00d08,0x7800e49,
	0x405b249,0x7400248,0x90e1247,0x7c00509,0xc7875c0,0x0000000,0x6806349,0x6800007,
	0x6801c88,0x7400247,0xd07ffc8,0x4001249,0xcc00000,0x0000000,0x649c907,0xbefffc7,
	0x0000000,0xc07fd40,0x0000000,0x6806349,0x6800008,0x680000a,0x64c2a07,0xa618007,
	0x0000000,0x64c3607,0x58081c7,0xaa3c047,0x0000000,0xfc081c0,0xbe18048,0x0000000,
	0x4000287,0x7400247,0xc780140,0x0000000,0x95081ca,0x7400247,0x4001249,0x4001208,
	0xb2bb888,0x0000000,0x7806287,0x40011c7,0x7c06287,0x649cb0a,0x6850008,0x240a20a,
	0x603510a,0x6806247,0x24091c9,0x4003249,0x5802249,0x5402249,0x6035209,0x7806247,
	0x200a287,0x240b1c8,0x5401249,0x4007249,0x5803249,0x5403249,0x7c06249,0x20071c9,
	0xb405207,0x6800008,0x4000207,0x603510a,0x7c06248,0x6a06249,0x6035009,0x6435009,
	0x580f249,0xbef8049,0xa62c008,0xc07eec0,0x0000000,0x603510a,0x58012cb,0x603520b,
	0x6a06349,0x6035009,0x6435009,0x580f249,0xbef8049,0x6803f87,0x7806248,0x9610207,
	0x609c908,0x8007401,0x649c907,0xbefffc7,0x0000000,0xc7809c0,0x7800207,0xa608007,
	0xc780780,0x44011c7,0xaa0c087,0x7800289,0x7800309,0xae380c9,0x0000000,0x405b1c9,
	0x70001c7,0x609c507,0x403b1c9,0x70001c8,0x40081c7,0x70001c7,0x9610207,0x609cd08,
	0x4001249,0x609c909,0x8007401,0x78002c9,0xae281c9,0x0000000,0x649c907,0xa6fc007,
	0x405b1c9,0x70001c7,0x609c507,0x4001249,0x609c909,0x8007401,0x6803fc9,0x7c00289,
	0x7c002c9,0x7c00309,0x6800009,0x7c00209,0xc7855c0,0x0000000,0x7800889,0xa608009,
	0xc780700,0x7800789,0xaa0ffc9,0xc008a80,0x0000000,0x7800889,0xaa58009,0x683ffc9,
	0xaa1c009,0x6494707,0x91081c7,0x7806188,0xaa40008,0xa4fb207,0x4401249,0x683ffc8,
	0x649bb07,0x900c1c7,0xaa10007,0xaa0c008,0xc7fff00,0x4401208,0x649bc07,0x93e11c7,
	0xa2f8047,0x0000000,0xc078200,0x0000000,0x6800007,0x7c01687,0x7c018c7,0x64c5108,
	0x64c4609,0x64c4207,0x64c400a,0x2407287,0x40081c7,0x580a1c7,0xe000207,0x2409289,
	0x0000000,0x0000000,0xf0001c0,0xf010200,0x97081c8,0x540a1c7,0x2007247,0x64c4308,
	0x2407207,0x7c012c7,0x58101c7,0x7c01307,0xc00c840,0x0000000,0xfc0a1c0,0x7c062c7,
	0xfc031c0,0x78062c8,0x9543207,0x7c062c8,0xba08047,0xb20c0c7,0xc7fef80,0x0000000,
	0x44011c7,0x7c00187,0x60c0407,0x6800008,0x9808048,0xa234088,0x6800049,0x7800848,
	0xb628088,0xaa10087,0xaa18007,0xa614008,0x0000000,0x6800009,0xc784140,0x7c00889,
	0x4001208,0x7c00848,0x7c00889,0xaa48007,0x6800009,0x64c040a,0xfc10200,0xfc01200,
	0x94a1288,0xfc03200,0x9503248,0x9583248,0xa61c087,0x9583248,0xfc01200,0x9481288,
	0xfc03200,0x9403248,0x9483248,0x60c0209,0x60c040a,0x6800008,0x7c003c8,0x7800088,
	0x5404208,0x78000c9,0x5404249,0x9610248,0x6090809,0x6804008,0x6090708,0x7803e07,
	0x46011c7,0xc503780,0x0000000,0x649c909,0xaa10009,0x6800087,0xc7f3500,0x7c001c7,
	0x7800207,0xa608007,0xc780d00,0x44011c7,0xaa0c087,0x7800289,0x7800309,0xb2081c9,
	0xc780b80,0x0000000,0x78013c8,0x7800207,0x44011c7,0xa610087,0x0000000,0xbe38148,
	0xc780380,0xbe100c8,0x9808088,0x9c08088,0xc780180,0xbe14048,0x9808048,0xa60c007,
	0x0000000,0x9c08048,0x7c013c8,0xa20c0c8,0x0000000,0x98073c7,0x7800e48,0x4050208,
	0x7400207,0x78013c8,0x9c08008,0x7c013c8,0x405b1c9,0x70001c7,0x4050209,0x7000208,
	0x5410208,0x2c07207,0x609c507,0x403b1c9,0x70001c8,0x40081c7,0x70001c7,0x9610207,
	0x609cd08,0x4001249,0x609c909,0x8007401,0x6800009,0x7c00209,0x6800009,0x7c001c9,
	0x7800247,0x2c07247,0x780090a,0x78008e1,0xbe0c047,0xc780880,0x6800008,0x780098a,
	0x7800961,0xa278087,0x6800048,0x7800a0a,0x78009e1,0xa268107,0x6800088,0x7800a8a,
	0x7800a61,0xa258207,0x68000c8,0x7800b0a,0x7800ae1,0xa248407,0x6800108,0x7800b8a,
	0x7800b61,0xa238807,0x6800148,0x7800c4a,0x7800c21,0xa229007,0x6800188,0x7800cca,
	0x7800ca1,0xa21a007,0x68001c8,0x809ce01,0x6800047,0xc7f1d40,0x7c001c7,0x96102a1,
	0x7800387,0x90041c7,0xa8061c8,0x7800187,0xa620087,0x7800387,0x90841c7,0xa4051c8,
	0x6800047,0x3407207,0xc7ff380,0x2c091c9,0x809ce00,0x6800047,0x7800349,0xa60c008,
	0xc780600,0x9401247,0xa60c048,0xc780540,0x9481247,0xa60c088,0xc780480,0x9501247,
	0xa60c0c8,0xc7803c0,0x9581247,0x7801609,0xa60c108,0xc780240,0x9401247,0xa60c148,
	0xc780180,0x9481247,0xa60c188,0xc7800c0,0x9501247,0x9581247,0xc7800c0,0x7c01609,
	0x7c00349,0x7800d09,0x405b1c8,0x7c00e48,0x74001c9,0x78012c9,0x403b1c8,0x74001c9,
	0x7801309,0x40081c7,0x74001c9,0x6800047,0x3407207,0x7800249,0x2c091c9,0x7c00249,
	0x609b20a,0x609920a,0x7800187,0x4001247,0x7c00209,0xa608087,0xc780340,0x78002c7,
	0x7c00307,0x7c002c8,0x6499109,0x6099009,0x7800389,0x5404249,0x9404248,0x7c00389,
	0x609910a,0xc7800c0,0x0000000,0x7c00288,0x8098002,0x78004ce,0xa64c0ce,0x0000000,
	0x6499011,0x54103d1,0x581040f,0x2c0f40f,0x609810f,0x6499111,0x54103d1,0x581040f,
	0x2c0f40f,0x609820f,0x80980f0,0x78004ce,0xaa6c0ce,0x0000000,0x80980f4,0xc780600,
	0x0000000,0x7803e0e,0xaab800e,0x0000000,0x6499011,0x54103d1,0x649b110,0x5410410,
	0x78004ce,0xa61404e,0x0000000,0x58103cf,0xc7800c0,0x0000000,0x5810410,0x2c0f40f,
	0x609810f,0x6499111,0x54103d1,0x581040f,0x2c0f40f,0x609820f,0x80980f4,0x6800009,
	0x7c00009,0xc780080,0x7c00049,0x64c0009,0xa2fc049,0x0000000,0x64c3a09,0x9006249,
	0xaaec649,0x0000000,0x80c2800,0x80c0002,0xc7efb80,0x0000000,0xc0011c0,0x0000000,
	0x8011f00,0x8002515,0x8002605,0x8002708,0x8002801,0x8002a09,0x8007601,0x649c003,
	0x7c00903,0x58100c3,0x7c008c3,0x649c103,0x7c00983,0x58100c3,0x7c00943,0x649c203,
	0x7c00a03,0x58100c3,0x7c009c3,0x649c303,0x7c00a83,0x58100c3,0x7c00a43,0x649c403,
	0x7c00b03,0x58100c3,0x7c00ac3,0x649c503,0x7c00b83,0x58100c3,0x7c00b43,0x649c603,
	0x7c00c43,0x58100c3,0x7c00c03,0x649c703,0x7c00cc3,0x58100c3,0x7c00c83,0x6498e03,
	0x98037c3,0x6098e03,0x649ca07,0xaa48007,0x0000000,0x9010207,0x92101c7,0x609c607,
	0x609c708,0x400f1c7,0x58041c7,0x60c0907,0x7c00087,0x4401247,0x7c06189,0x400f208,
	0x5804208,0x7c000c8,0x9508207,0x6800007,0x7c00d07,0xcc00000,0x0000000,0xc7eea40,
	0x0000000,0xcc00000,0x0400000,0xc7ee940,0x0000000,0x684001f,0x60c011f,0x64c001f,
	0x9c1f19f,0x981f21f,0x60c001f,0x680001f,0x7c0021f,0x7c0025f,0x7c001df,0x7c0041f,
	0x7c0085f,0x7c0089f,0x6803fe0,0x7c002a0,0x7c002e0,0x7c00320,0x7c003a0,0x68000a0,
	0x7c00660,0x6800060,0x7c006a0,0x6800020,0x7c00720,0x68000e0,0x7c004e0,0x6804020,
	0x7c06020,0xcc00000,0x0000000,0xc7ff800,0x0000000,0x78003de,0x400179e,0x7c003de,
	0x649ce1e,0xa64401e,0x64c411e,0x64c4322,0x968c7a2,0xa40d8de,0x40008de,0x64c471e,
	0xba2a01e,0xba26022,0x780165e,0x400179e,0x7c0165e,0xa61c21e,0x0000000,0x809cf01,
	0xc780000,0x0000000,0x680001e,0x7c0165e,0xcc00000,0x0400000,0x649c828,0xaa68028,
	0xa20e028,0xc7805c0,0x7c00428,0xaa3c068,0x6bfffa9,0xaa340a8,0x6bfff69,0xaa2c0e8,
	0x6bffee9,0xaa24128,0x6bffde9,0xaa1c168,0x6bffbe9,0xaa141a8,0x6bff7e9,0xaa0c1e8,
	0x6bfefe9,0x6bfdfe9,0x0800000,0x809ce00,0x7800268,0x2828a68,0x7c00268,0x0400000,
	0x809c800,0x78001e8,0xa618028,0x7800ea8,0xaa18028,0x6802028,0x64c4329,0xb003a29,
	0x6800128,0x6030528,0xcc00000,0x0000000,0x7800189,0xaa0c089,0x6800208,0x7c00608,
	0x78004c8,0xaa0c0c8,0x6800088,0x6800048,0x7c00648,0xaa10089,0x6800008,0x7c03c08,
	0x7c03c48,0x7c0f808,0x6800048,0x7c03e48,0x7800188,0xa614048,0xc004a00,0x0000000,
	0xc780100,0x0000000,0xc005000,0x0000000,0xc002c40,0x0000000,0x7800009,0x4001249,
	0x7c00009,0x7800088,0xb809209,0x6800009,0x7c00009,0x7800048,0x4001208,0x78000c9,
	0xb803248,0x7c00048,0x680008d,0xcc00000,0x0000000,0x7800007,0x7806108,0xb403207,
	0x2408207,0x7800008,0xb214008,0x6800047,0xae0c288,0x6800287,0x40001c8,0x7800008,
	0xb4031c8,0x24081c8,0x6800008,0xc0011c0,0x0000000,0x7800787,0xa60bfc7,0xcc00000,
	0xc000100,0x0000000,0xc7ffec0,0x0000000,0x78004c8,0xaa0c0c8,0x6800088,0x6800048,
	0x7c00648,0x7800009,0x5402249,0x6808008,0x2009209,0x7100248,0x90011c8,0x5c01208,
	0x7c03c48,0x4001249,0x7100248,0x7c03c08,0x4001249,0x7100248,0x90012c8,0x5c01208,
	0x7c03d48,0x4001249,0x7100248,0x7c03d08,0x54022cb,0x94612c7,0xa60c30b,0xc780240,
	0x680020b,0xa61c00b,0x6800008,0x7c03c48,0x7c03c08,0x7c03d48,0x7c03d08,0x680020b,
	0x7c0060b,0x7c0f808,0x6800048,0x7c03e48,0xc003b80,0x0000000,0xc0017c0,0x0000000,
	0x7800009,0x4001249,0x7c00009,0x7800088,0xb80c209,0x6800009,0x7c00009,0x7800048,
	0x4001208,0x78000c9,0xb806248,0x7c00048,0x6800009,0x7c00049,0x6803fc9,0x7c00789,
	0xcc00000,0x0000000,0x7800189,0xa640009,0x7800049,0x540a249,0x649cb07,0x20091c9,
	0x6035109,0x7800089,0x5402249,0x6035209,0x6b08009,0x6035009,0x6435009,0x580f249,
	0xbef8049,0xcc00000,0x7c00008,0x7906149,0xb403209,0xcc00000,0x7c00008,0x44011c9,
	0x7c06147,0x5402249,0x6808007,0x20091c9,0x7806007,0x680400b,0xac032c7,0x44041c7,
	0x6805f07,0x7c06007,0x70001cb,0x740024b,0x40011c7,0x4001249,0x70001cb,0x740024b,
	0x40011c7,0x4001249,0x70001cb,0x740024b,0x40011c7,0x4001249,0x70001cb,0xc7ff4c0,
	0x740024b,0x64c4414,0x9101514,0xa6f8014,0xc7ea500,0x0000000,0xc0005c0,0x0000000,
	0x7800007,0x40011c7,0x7c00747,0x7800049,0x7800088,0xb403207,0xcc00000,0x7c00789,
	0x6800008,0x7c00748,0x4001209,0x78000c9,0xb403248,0xcc00000,0x7c00788,0x6411f08,
	0x4001208,0x6011f08,0x6803fc8,0xcc00000,0x7c00788,0x7800009,0x7c06149,0x6808008,
	0x5402249,0x2008248,0x7806007,0x7000209,0x74001c9,0x4001208,0x40011c7,0x7000209,
	0x74001c9,0x4001208,0x40011c7,0x7000209,0x74001c9,0x4001208,0x40011c7,0x7000209,
	0x74001c9,0x4403208,0x40011c7,0x9c071c7,0x7c06007,0x7800607,0xbe4c047,0x7903c49,
	0x5401249,0x90612c7,0x940124b,0x7400209,0x4001208,0x7903c09,0x7400209,0x4001208,
	0x7903d49,0x5401249,0x90412c7,0x940124b,0x7400209,0x4001208,0x7903d09,0xc780840,
	0x7400209,0x7800009,0xa610009,0x44041c8,0xc780700,0x0000000,0x780618b,0xb4102c9,
	0x70001c9,0x7400209,0x40011c7,0x4001208,0x70001c9,0x7400209,0x40011c7,0x4001208,
	0x70001c9,0x7400209,0x40011c7,0x4001208,0x70001c9,0xc7802c0,0x7400209,0x6800049,
	0x7400209,0x4001208,0x6800009,0x7400209,0x4001208,0x7400209,0x4001208,0x7400209,
	0x7800189,0xa644049,0x7800009,0x7806188,0xb80e209,0x7800049,0x540a249,0x649cb08,
	0x2009209,0x6035109,0x7800089,0x5402249,0x6035209,0x6a08009,0x6035009,0x6435009,
	0x580f249,0xbef8049,0xcc00000,0x0000000,0x6490604,0xaefcc04,0x0000000,0x7800004,
	0x7800045,0x9508144,0x6800084,0x6c00004,0x78004c6,0x4001186,0x9562106,0x6090604,
	0x6090605,0x6881044,0x9562106,0x6090604,0xcc00000,0x0000000,0x6490604,0xaefcc04,
	0x0000000,0x7800004,0x7800045,0x9508144,0x6900184,0x6c00004,0x78004c6,0x4001186,
	0x9562106,0x6090604,0x6090605,0x8090600,0x6800004,0x95e2106,0x6090604,0x6985144,
	0x6c00004,0x9562106,0x6090604,0xcc00000,0x0000000,0x6800007,0x7c06107,0x7c00747,
	0xcc00000,0x7c00787,0x6490604,0xaefcc04,0x0000000,0x680000a,0x7800004,0x7800049,
	0x9508244,0x6800087,0x7803e44,0xa60c044,0x6c00007,0x9807087,0x7800606,0xbe10106,
	0x0000000,0xc780140,0x9807387,0xa20c206,0x98073c7,0x9807387,0x7800645,0x78004cb,
	0xa67c0cb,0xa208306,0xa618085,0x6800008,0xc000e40,0x0000000,0xc780d40,0x0000000,
	0x680000a,0xa6180c5,0x780018c,0xa61404c,0x0000000,0xc7800c0,0x9807407,0xa638045,
	0x6800084,0x95621c4,0x6800044,0x94a31c4,0xc000a40,0x6800088,0x68000c4,0x95621c4,
	0x9c07047,0xc000900,0x68000c8,0xc780800,0x0000000,0xc780000,0x0000000,0xaa0c04b,
	0x6800084,0x68000c4,0x95621c4,0xa208306,0xa614045,0xc000600,0x6800008,0xc780500,
	0x0000000,0xa6240c5,0x780018c,0xa62004c,0x0000000,0x6800008,0xc0003c0,0x9807407,
	0xc7802c0,0x0000000,0xa6ac085,0x6800044,0x94a31c4,0xc000200,0x6800088,0x9807107,
	0x9c07047,0xc000100,0x68000c8,0xcc00000,0x0000000,0x680000b,0x6c0004b,0xaa0c0c8,
	0x6090607,0x6090609,0x91c2187,0xaa5c086,0x7803c04,0xa6180c8,0x7803c45,0xa8042c7,
	0x0000000,0x7803c84,0x7803cc5,0x6090604,0x9181107,0x91e1245,0x2809244,0x7803e4c,
	0xaa1004c,0xa0042c7,0x0000000,0x68000c6,0x9161247,0x3405285,0x9601144,0x95e1149,
	0xaa5c046,0x6090605,0x7803d04,0xa6100c8,0x7803d45,0x7803d84,0x7803dc5,0x6090604,
	0x9181107,0x91e1245,0x2809244,0x7803e4c,0xaa1804c,0xa0062c7,0x0000000,0x9161247,
	0xc7800c0,0x5001249,0x9161247,0x3405285,0x9601144,0x95e1149,0x6090605,0x9804347,
	0x9804204,0x9804184,0xaa0c088,0x9c04044,0x9804004,0xcc00000,0x6090604,0xc7e5840,
	0x0000000,0x609c42d,0x0000000,0x649c42d,0xa6f802d,0x0000000,0xcc00000,0x0000000,
	0xfc09200,0xfc101c0,0x78061c9,0x780620b,0x7c061c7,0x7c06208,0x5410208,0x2c081c8,
	0x54102cb,0x2c0b24b,0xfc021c0,0xa610007,0xc780940,0xa60800b,0xc7808c0,0x9265248,
	0x5406289,0x5402249,0x240a24a,0x91a6248,0x2009289,0x5406289,0x5402249,0x240a24a,
	0x90c6248,0x2008289,0x926524b,0x5406289,0x5402249,0x240a24a,0x91a624b,0x2009289,
	0x5406289,0x5402249,0x240a24a,0x90c624b,0x200b289,0xb8052c8,0x24082c8,0x6800207,
	0xb4021c8,0xc780200,0x6800007,0x7c00847,0x7c00887,0x6800008,0x7c061c8,0x7c06208,
	0x0000000,0xc7f4c80,0xfc071c0,0x0000000
};