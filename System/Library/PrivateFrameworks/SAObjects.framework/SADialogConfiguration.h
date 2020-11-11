/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SADialogConfiguration : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(void)setGender:(NSString *)arg1 ;
-(id)encodedClassName;
-(id<SAAceSerializable>)context;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(NSString *)gender;
@end
