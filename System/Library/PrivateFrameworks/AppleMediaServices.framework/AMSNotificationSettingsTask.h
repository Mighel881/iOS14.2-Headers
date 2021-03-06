/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, AMSProcessInfo, NSString;

@interface AMSNotificationSettingsTask : AMSTask <AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSString* _identifier;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                   //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(NSString *)identifier;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)fetchAllSettings;
-(id)_generateParametersForItems:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
-(id)fetchSettingForIdentifier:(id)arg1 ;
-(id)updateSettings:(id)arg1 ;
-(id)fetchSettingsForSections:(id)arg1 ;
@end

