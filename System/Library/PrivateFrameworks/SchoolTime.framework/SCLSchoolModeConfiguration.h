/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, SCLSchoolModeDelegate;
@class NSXPCListenerEndpoint, NSString, NSObject, NSUUID;

@interface SCLSchoolModeConfiguration : NSObject <NSCopying> {

	NSXPCListenerEndpoint* _testingEndpoint;
	BOOL _loadsSynchronously;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _targetQueue;
	id<SCLSchoolModeDelegate> _delegate;
	NSUUID* _pairingID;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * testingEndpoint; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue;               //@synthesize targetQueue=_targetQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SCLSchoolModeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSUUID * pairingID;                                       //@synthesize pairingID=_pairingID - In the implementation block
@property (assign,nonatomic) BOOL loadsSynchronously;                                //@synthesize loadsSynchronously=_loadsSynchronously - In the implementation block
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)setLoadsSynchronously:(BOOL)arg1 ;
-(id)init;
-(NSUUID *)pairingID;
-(id<SCLSchoolModeDelegate>)delegate;
-(BOOL)loadsSynchronously;
-(NSString *)identifier;
-(void)setDelegate:(id<SCLSchoolModeDelegate>)arg1 ;
-(void)setPairingID:(NSUUID *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSXPCListenerEndpoint *)testingEndpoint;
-(void)setTestingEndpoint:(NSXPCListenerEndpoint *)arg1 ;
@end
