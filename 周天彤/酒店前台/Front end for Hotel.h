
#if !defined(AFX_FRONTENDFORHOTEL_H__3609FE66_7E0E_428D_AD26_DC43AAB743CD__INCLUDED_)
#define AFX_FRONTENDFORHOTEL_H__3609FE66_7E0E_428D_AD26_DC43AAB743CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "resource.h"

#define MAX_FLOORS     5

const int AVAILABLE = 1;
const int UNAVAILABLE = 2;

const int SINGLE = 1;
const int DOUBLE = 2;
const int TRIBLE = 3;
const int LUXURY = 4;
const int SUIT = 5;

typedef struct {
	int room_id;
	RECT position;
	int status;
	int type;
} room_t;

typedef room_t floor_t[26];

floor_t floors[MAX_FLOORS] = {
	{
		{ 1, {632,  11, 680, 106}, AVAILABLE, TRIBLE},
		{ 2, {632, 163, 680, 228}, AVAILABLE, SINGLE},
		{ 3, {582,  11, 633, 106}, AVAILABLE, TRIBLE},
		{ 6, {582, 163, 633, 228}, AVAILABLE, SINGLE},
		{66, {534,  10, 582, 106}, AVAILABLE, LUXURY},
		{ 8, {534, 163, 582, 228}, AVAILABLE, SINGLE},
		{ 5, {487,  31, 534, 106}, AVAILABLE, SINGLE},
		{10, {487, 163, 534, 229}, AVAILABLE, SINGLE},
		{12, {422, 163, 487, 229}, AVAILABLE, SINGLE},
		{ 7, {396,  31, 442, 106}, AVAILABLE, SINGLE},
		{16, {396, 163, 422, 229}, AVAILABLE, SINGLE},
		{ 9, {345,  31, 396, 106}, AVAILABLE, SINGLE},
		{18, {345, 163, 396, 229}, AVAILABLE, SINGLE},
		{11, {300,  31, 347, 106}, AVAILABLE, SINGLE},
		{20, {300, 163, 347, 229}, AVAILABLE, SINGLE},
		{13, {252,  31, 300, 106}, AVAILABLE, SINGLE},
		{22, {252, 163, 300, 229}, AVAILABLE, SINGLE},
		{26, {199, 163, 252, 229}, AVAILABLE, SINGLE},
		{15, {147,  31, 199, 106}, AVAILABLE, SINGLE},
		{28, {147, 163, 199, 229}, AVAILABLE, SINGLE},
		{17, { 99,  11, 147, 106}, AVAILABLE, TRIBLE},
		{88, { 99, 163, 147, 238}, AVAILABLE, LUXURY},
		{38, {  6,  10,  60,  56}, AVAILABLE, SINGLE},
		{36, {  6,  56,  60, 103}, AVAILABLE, SINGLE},
		{32, {  6, 103,  60, 187}, AVAILABLE, SUIT},
		{30, {  6, 187,  60, 237}, AVAILABLE, SINGLE},
	},
	{
		{ 1, {632,  11, 680, 106}, AVAILABLE, TRIBLE},
		{ 2, {632, 163, 680, 228}, AVAILABLE, SINGLE},
		{ 3, {582,  11, 633, 106}, AVAILABLE, TRIBLE},
		{ 6, {582, 163, 633, 228}, AVAILABLE, SINGLE},
		{66, {534,  10, 582, 106}, AVAILABLE, LUXURY},
		{ 8, {534, 163, 582, 228}, AVAILABLE, SINGLE},
		{ 5, {487,  31, 534, 106}, AVAILABLE, SINGLE},
		{10, {487, 163, 534, 229}, AVAILABLE, SINGLE},
		{12, {422, 163, 487, 229}, AVAILABLE, SINGLE},
		{ 7, {396,  31, 442, 106}, AVAILABLE, SINGLE},
		{16, {396, 163, 422, 229}, AVAILABLE, SINGLE},
		{ 9, {345,  31, 396, 106}, AVAILABLE, SINGLE},
		{18, {345, 163, 396, 229}, AVAILABLE, SINGLE},
		{11, {300,  31, 347, 106}, AVAILABLE, SINGLE},
		{20, {300, 163, 347, 229}, AVAILABLE, SINGLE},
		{13, {252,  31, 300, 106}, AVAILABLE, SINGLE},
		{22, {252, 163, 300, 229}, AVAILABLE, SINGLE},
		{26, {199, 163, 252, 229}, AVAILABLE, SINGLE},
		{15, {147,  31, 199, 106}, AVAILABLE, SINGLE},
		{28, {147, 163, 199, 229}, AVAILABLE, SINGLE},
		{17, { 99,  11, 147, 106}, AVAILABLE, TRIBLE},
		{88, { 99, 163, 147, 238}, AVAILABLE, LUXURY},
		{38, {  6,  10,  60,  56}, AVAILABLE, SINGLE},
		{36, {  6,  56,  60, 103}, AVAILABLE, SINGLE},
		{32, {  6, 103,  60, 187}, AVAILABLE, SUIT},
		{30, {  6, 187,  60, 237}, AVAILABLE, SINGLE},
	},
	{
		{ 1, {632,  11, 680, 106}, AVAILABLE, TRIBLE},
		{ 2, {632, 163, 680, 228}, AVAILABLE, SINGLE},
		{ 3, {582,  11, 633, 106}, AVAILABLE, TRIBLE},
		{ 6, {582, 163, 633, 228}, AVAILABLE, SINGLE},
		{66, {534,  10, 582, 106}, AVAILABLE, LUXURY},
		{ 8, {534, 163, 582, 228}, AVAILABLE, SINGLE},
		{ 5, {487,  31, 534, 106}, AVAILABLE, SINGLE},
		{10, {487, 163, 534, 229}, AVAILABLE, SINGLE},
		{12, {422, 163, 487, 229}, AVAILABLE, SINGLE},
		{ 7, {396,  31, 442, 106}, AVAILABLE, SINGLE},
		{16, {396, 163, 422, 229}, AVAILABLE, SINGLE},
		{ 9, {345,  31, 396, 106}, AVAILABLE, SINGLE},
		{18, {345, 163, 396, 229}, AVAILABLE, SINGLE},
		{11, {300,  31, 347, 106}, AVAILABLE, SINGLE},
		{20, {300, 163, 347, 229}, AVAILABLE, SINGLE},
		{13, {252,  31, 300, 106}, AVAILABLE, SINGLE},
		{22, {252, 163, 300, 229}, AVAILABLE, SINGLE},
		{26, {199, 163, 252, 229}, AVAILABLE, SINGLE},
		{15, {147,  31, 199, 106}, AVAILABLE, SINGLE},
		{28, {147, 163, 199, 229}, AVAILABLE, SINGLE},
		{17, { 99,  11, 147, 106}, AVAILABLE, TRIBLE},
		{88, { 99, 163, 147, 238}, AVAILABLE, LUXURY},
		{38, {  6,  10,  60,  56}, AVAILABLE, SINGLE},
		{36, {  6,  56,  60, 103}, AVAILABLE, SINGLE},
		{32, {  6, 103,  60, 187}, AVAILABLE, SUIT},
		{30, {  6, 187,  60, 237}, AVAILABLE, SINGLE},
	},
	{
		{ 1, {632,  11, 680, 106}, AVAILABLE, TRIBLE},
		{ 2, {632, 163, 680, 228}, AVAILABLE, SINGLE},
		{ 3, {582,  11, 633, 106}, AVAILABLE, TRIBLE},
		{ 6, {582, 163, 633, 228}, AVAILABLE, SINGLE},
		{66, {534,  10, 582, 106}, AVAILABLE, LUXURY},
		{ 8, {534, 163, 582, 228}, AVAILABLE, SINGLE},
		{ 5, {487,  31, 534, 106}, AVAILABLE, SINGLE},
		{10, {487, 163, 534, 229}, AVAILABLE, SINGLE},
		{12, {422, 163, 487, 229}, AVAILABLE, SINGLE},
		{ 7, {396,  31, 442, 106}, AVAILABLE, SINGLE},
		{16, {396, 163, 422, 229}, AVAILABLE, SINGLE},
		{ 9, {345,  31, 396, 106}, AVAILABLE, SINGLE},
		{18, {345, 163, 396, 229}, AVAILABLE, SINGLE},
		{11, {300,  31, 347, 106}, AVAILABLE, SINGLE},
		{20, {300, 163, 347, 229}, AVAILABLE, SINGLE},
		{13, {252,  31, 300, 106}, AVAILABLE, SINGLE},
		{22, {252, 163, 300, 229}, AVAILABLE, SINGLE},
		{26, {199, 163, 252, 229}, AVAILABLE, SINGLE},
		{15, {147,  31, 199, 106}, AVAILABLE, SINGLE},
		{28, {147, 163, 199, 229}, AVAILABLE, SINGLE},
		{17, { 99,  11, 147, 106}, AVAILABLE, TRIBLE},
		{88, { 99, 163, 147, 238}, AVAILABLE, LUXURY},
		{38, {  6,  10,  60,  56}, AVAILABLE, SINGLE},
		{36, {  6,  56,  60, 103}, AVAILABLE, SINGLE},
		{32, {  6, 103,  60, 187}, AVAILABLE, SUIT},
		{30, {  6, 187,  60, 237}, AVAILABLE, SINGLE},
	},
	{
		{ 1, {632,  11, 680, 106}, AVAILABLE, TRIBLE},
		{ 2, {632, 163, 680, 228}, AVAILABLE, SINGLE},
		{ 3, {582,  11, 633, 106}, AVAILABLE, TRIBLE},
		{ 6, {582, 163, 633, 228}, AVAILABLE, SINGLE},
		{66, {534,  10, 582, 106}, AVAILABLE, LUXURY},
		{ 8, {534, 163, 582, 228}, AVAILABLE, SINGLE},
		{ 5, {487,  31, 534, 106}, AVAILABLE, SINGLE},
		{10, {487, 163, 534, 229}, AVAILABLE, SINGLE},
		{12, {422, 163, 487, 229}, AVAILABLE, SINGLE},
		{ 7, {396,  31, 442, 106}, AVAILABLE, SINGLE},
		{16, {396, 163, 422, 229}, AVAILABLE, SINGLE},
		{ 9, {345,  31, 396, 106}, AVAILABLE, SINGLE},
		{18, {345, 163, 396, 229}, AVAILABLE, SINGLE},
		{11, {300,  31, 347, 106}, AVAILABLE, SINGLE},
		{20, {300, 163, 347, 229}, AVAILABLE, SINGLE},
		{13, {252,  31, 300, 106}, AVAILABLE, SINGLE},
		{22, {252, 163, 300, 229}, AVAILABLE, SINGLE},
		{26, {199, 163, 252, 229}, AVAILABLE, SINGLE},
		{15, {147,  31, 199, 106}, AVAILABLE, SINGLE},
		{28, {147, 163, 199, 229}, AVAILABLE, SINGLE},
		{17, { 99,  11, 147, 106}, AVAILABLE, TRIBLE},
		{88, { 99, 163, 147, 238}, AVAILABLE, LUXURY},
		{38, {  6,  10,  60,  56}, AVAILABLE, SINGLE},
		{36, {  6,  56,  60, 103}, AVAILABLE, SINGLE},
		{32, {  6, 103,  60, 187}, AVAILABLE, SUIT},
		{30, {  6, 187,  60, 237}, AVAILABLE, SINGLE},
	},
};

#endif // !defined(AFX_FRONTENDFORHOTEL_H__3609FE66_7E0E_428D_AD26_DC43AAB743CD__INCLUDED_)
