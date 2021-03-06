/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject {

	CKDPCSData* _pcsData;
	double _lastAccess;

}

@property (nonatomic,retain) CKDPCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
@property (assign) double lastAccess;                           //@synthesize lastAccess=_lastAccess - In the implementation block
-(id)CKPropertiesDescription;
-(id)init;
-(id)description;
-(double)lastAccess;
-(void)setLastAccess:(double)arg1 ;
-(CKDPCSData *)pcsData;
-(void)setPcsData:(CKDPCSData *)arg1 ;
@end

