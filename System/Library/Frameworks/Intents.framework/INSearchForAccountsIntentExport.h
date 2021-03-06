/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString;


@protocol INSearchForAccountsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * accountNickname; 
@property (assign,nonatomic) long long accountType; 
@property (nonatomic,copy) INSpeakableString * organizationName; 
@property (assign,nonatomic) long long requestedBalanceType; 
@required
-(INSpeakableString *)accountNickname;
-(void)setAccountNickname:(id)arg1;
-(long long)requestedBalanceType;
-(void)setRequestedBalanceType:(long long)arg1;
-(id)init;
-(void)setOrganizationName:(id)arg1;
-(long long)accountType;
-(INSpeakableString *)organizationName;
-(void)setAccountType:(long long)arg1;

@end

