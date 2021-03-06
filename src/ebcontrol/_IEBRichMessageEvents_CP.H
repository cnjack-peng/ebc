
// Wizard-generated connection point proxy class
// WARNING: This file may be regenerated by the wizard


#pragma once

template<class T>
class CProxy_IEBRichMessageEvents :
	public IConnectionPointImpl<T, &__uuidof(_IEBRichMessageEvents)>
{
public:
	HRESULT Fire_onContextMenuCopy( BSTR sCopyString)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[1];
				avarParams[0] = sCopyString;
				avarParams[0].vt = VT_BSTR;
				DISPPARAMS params = { avarParams, NULL, 1, 0 };
				hr = pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
	HRESULT Fire_onContextMenuDelete( LONGLONG nMsgId,  LONG nIndex)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[2];
				avarParams[1] = nMsgId;
				avarParams[1].vt = VT_I8;
				avarParams[0] = nIndex;
				avarParams[0].vt = VT_I4;
				DISPPARAMS params = { avarParams, NULL, 2, 0 };
				hr = pConnection->Invoke(2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
	HRESULT Fire_onContextMenuSelect( ULONG nItemData,  BSTR sSelectString,  LONGLONG nSelectMsgId)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[3];
				avarParams[2] = nItemData;
				avarParams[2].vt = VT_UI4;
				avarParams[1] = sSelectString;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = nSelectMsgId;
				avarParams[0].vt = VT_I8;
				DISPPARAMS params = { avarParams, NULL, 3, 0 };
				hr = pConnection->Invoke(11, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
	HRESULT Fire_onItemLBtnClick(LONG nLineId, LONG nItemId, ULONG nItemData, BSTR sParamString, LONGLONG nSelectMsgId)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[5];
				avarParams[4] = nLineId;
				avarParams[4].vt = VT_UI4;
				avarParams[3] = nItemId;
				avarParams[3].vt = VT_I4;
				avarParams[2] = nItemData;
				avarParams[2].vt = VT_UI4;
				avarParams[1] = sParamString;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = nSelectMsgId;
				avarParams[0].vt = VT_I8;
				DISPPARAMS params = { avarParams, NULL, 5, 0 };
				hr = pConnection->Invoke(12, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
	HRESULT Fire_onItemLBtnDblClick(LONG nLineId, LONG nItemId, ULONG nItemData, BSTR sParamString, LONGLONG nSelectMsgId)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[5];
				avarParams[4] = nLineId;
				avarParams[4].vt = VT_UI4;
				avarParams[3] = nItemId;
				avarParams[3].vt = VT_I4;
				avarParams[2] = nItemData;
				avarParams[2].vt = VT_UI4;
				avarParams[1] = sParamString;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = nSelectMsgId;
				avarParams[0].vt = VT_I8;
				DISPPARAMS params = { avarParams, NULL, 5, 0 };
				hr = pConnection->Invoke(13, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
	HRESULT Fire_onItemRBtnClick(LONG nLineId, LONG nItemId, ULONG nItemData, BSTR sParamString, LONGLONG nSelectMsgId)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[5];
				avarParams[4] = nLineId;
				avarParams[4].vt = VT_UI4;
				avarParams[3] = nItemId;
				avarParams[3].vt = VT_I4;
				avarParams[2] = nItemData;
				avarParams[2].vt = VT_UI4;
				avarParams[1] = sParamString;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = nSelectMsgId;
				avarParams[0].vt = VT_I8;
				DISPPARAMS params = { avarParams, NULL, 5, 0 };
				hr = pConnection->Invoke(14, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
	HRESULT Fire_onItemMoveEnter(LONG nLineId, LONG nItemId, ULONG nItemData, BSTR sParamString, LONGLONG nSelectMsgId, ULONG nParam)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[6];
				avarParams[5] = nLineId;
				avarParams[5].vt = VT_UI4;
				avarParams[4] = nItemId;
				avarParams[4].vt = VT_I4;
				avarParams[3] = nItemData;
				avarParams[3].vt = VT_UI4;
				avarParams[2] = sParamString;
				avarParams[2].vt = VT_BSTR;
				avarParams[1] = nSelectMsgId;
				avarParams[1].vt = VT_I8;
				avarParams[0] = nParam;
				avarParams[0].vt = VT_UI4;
				DISPPARAMS params = { avarParams, NULL, 6, 0 };
				hr = pConnection->Invoke(21, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
	HRESULT Fire_onItemMoveLeave(LONG nLineId, LONG nItemId, ULONG nItemData, BSTR sParamString, LONGLONG nSelectMsgId)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[5];
				avarParams[4] = nLineId;
				avarParams[4].vt = VT_UI4;
				avarParams[3] = nItemId;
				avarParams[3].vt = VT_I4;
				avarParams[2] = nItemData;
				avarParams[2].vt = VT_UI4;
				avarParams[1] = sParamString;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = nSelectMsgId;
				avarParams[0].vt = VT_I8;
				DISPPARAMS params = { avarParams, NULL, 5, 0 };
				hr = pConnection->Invoke(22, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, NULL, NULL, NULL);
			}
		}
		return hr;
	}
};

