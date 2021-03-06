/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NEPolicySession, NSMutableArray;

@interface NEAppSidecarPolicySession : NSObject {

	NEPolicySession* _policySession;
	NSMutableArray* _policyIDList;

}

@property (retain) NEPolicySession * policySession;              //@synthesize policySession=_policySession - In the implementation block
@property (retain) NSMutableArray * policyIDList;                //@synthesize policyIDList=_policyIDList - In the implementation block
+(id)connectionIdentifier;
-(id)init;
-(NSMutableArray *)policyIDList;
-(BOOL)installPolicies;
-(BOOL)uninstallPolicies;
-(void)setPolicyIDList:(NSMutableArray *)arg1 ;
-(NEPolicySession *)policySession;
-(void)setPolicySession:(NEPolicySession *)arg1 ;
@end

