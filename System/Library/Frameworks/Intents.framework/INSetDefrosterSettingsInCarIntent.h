/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetDefrosterSettingsInCarIntentExport.h>

@class NSNumber, INSpeakableString, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enable; 
@property (nonatomic,readonly) long long defroster; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)enable;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setDefroster:(long long)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(INSpeakableString *)carName;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 carName:(id)arg3 ;
-(id)domain;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(long long)defroster;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 ;
-(void)setEnable:(NSNumber *)arg1 ;
@end
