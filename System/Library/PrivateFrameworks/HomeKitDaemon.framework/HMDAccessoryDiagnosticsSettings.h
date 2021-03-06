/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMDService, HAPSupportedDiagnosticsSnapshot, NSString;

@interface HMDAccessoryDiagnosticsSettings : NSObject {

	HMDService* _diagnosticsService;
	HAPSupportedDiagnosticsSnapshot* _currentSnapshot;
	NSString* _transport;

}

@property (readonly) HMDService * diagnosticsService;                              //@synthesize diagnosticsService=_diagnosticsService - In the implementation block
@property (retain) HAPSupportedDiagnosticsSnapshot * currentSnapshot;              //@synthesize currentSnapshot=_currentSnapshot - In the implementation block
@property (readonly) NSString * transport;                                         //@synthesize transport=_transport - In the implementation block
-(id)attributeDescriptions;
-(HAPSupportedDiagnosticsSnapshot *)currentSnapshot;
-(id)initWithService:(id)arg1 ;
-(void)setCurrentSnapshot:(HAPSupportedDiagnosticsSnapshot *)arg1 ;
-(NSString *)transport;
-(HMDService *)diagnosticsService;
@end

