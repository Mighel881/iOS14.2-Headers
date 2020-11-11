/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CARSessionStatus, CARSession;

@interface CPSEntityUtility : NSObject {

	CARSessionStatus* _sessionStatus;

}

@property (nonatomic,retain) CARSessionStatus * sessionStatus;              //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,readonly) CARSession * currentSession; 
@property (nonatomic,readonly) BOOL rightHandDrive; 
+(id)sharedInstance;
-(BOOL)rightHandDrive;
-(id)init;
-(CARSession *)currentSession;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(CARSessionStatus *)sessionStatus;
@end
