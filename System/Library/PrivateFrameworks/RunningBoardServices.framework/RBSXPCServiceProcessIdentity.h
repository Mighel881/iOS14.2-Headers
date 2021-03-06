/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSProcessIdentity.h>

@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {

	RBSXPCServiceIdentity* _serviceIdentity;

}
+(BOOL)shouldManageExtensionWithExtensionPoint:(id)arg1 ;
-(id)xpcServiceIdentifier;
-(BOOL)isXPCService;
-(id)_initWithXPCServiceID:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
-(id)hostIdentifier;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isAnonymous;
-(id)encodeForJob;
-(id)copyWithEuid:(unsigned)arg1 ;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(id)initWithDecodeFromJob:(id)arg1 ;
-(id)hostIdentity;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(BOOL)inheritsCoalitionBand;
-(id)uuid;
-(BOOL)isExtension;
-(unsigned char)defaultManageFlags;
@end

