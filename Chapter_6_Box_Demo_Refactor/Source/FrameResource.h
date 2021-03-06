#ifndef FRAME_RESOURCE_H
#define FRAME_RESOURCE_H

#include <wrl.h>

#include "d3d12.h"
#include "d3dx12.h"
#include "DirectXMath.h"

#include "D3DUtil.h"

using Microsoft::WRL::ComPtr;

struct FrameResource
{
	FrameResource(ComPtr<ID3D12Device>& device, UINT numRenderObjects);
	~FrameResource();

	ComPtr<ID3D12CommandAllocator> CmdAlloc;
	UINT FenceValue;

	ComPtr<ID3D12Resource> ConstantBuffer;
	BYTE* ConstantBufferData;
};

#endif // FRAME_RESOURCE_H