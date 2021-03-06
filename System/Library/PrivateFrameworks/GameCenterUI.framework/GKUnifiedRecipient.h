/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CNContact;

@interface GKUnifiedRecipient : NSObject {

	NSString* _fullName;
	NSString* _handle;
	NSString* _nickName;
	NSString* _label;
	CNContact* _contact;

}

@property (nonatomic,retain) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * handle;                //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * nickName;              //@synthesize nickName=_nickName - In the implementation block
@property (nonatomic,retain) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
+(id)recipientForHandle:(id)arg1 ;
+(id)recipientForContact:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)handle;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(id)displayName;
-(NSString *)nickName;
-(void)setLabel:(NSString *)arg1 ;
-(void)setNickName:(NSString *)arg1 ;
@end

