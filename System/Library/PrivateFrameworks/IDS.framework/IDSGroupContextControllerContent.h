/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSCloudKitContainer, ENGroupContext, ENAccountIdentity;

@interface IDSGroupContextControllerContent : NSObject {

	IDSCloudKitContainer* _cloudKitContainer;
	ENGroupContext* _groupContext;
	ENAccountIdentity* _accountIdentity;

}

@property (nonatomic,retain) IDSCloudKitContainer * cloudKitContainer;              //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (nonatomic,retain) ENGroupContext * groupContext;                         //@synthesize groupContext=_groupContext - In the implementation block
@property (nonatomic,retain) ENAccountIdentity * accountIdentity;                   //@synthesize accountIdentity=_accountIdentity - In the implementation block
-(ENGroupContext *)groupContext;
-(void)setCloudKitContainer:(IDSCloudKitContainer *)arg1 ;
-(void)setGroupContext:(ENGroupContext *)arg1 ;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
-(IDSCloudKitContainer *)cloudKitContainer;
-(ENAccountIdentity *)accountIdentity;
@end

