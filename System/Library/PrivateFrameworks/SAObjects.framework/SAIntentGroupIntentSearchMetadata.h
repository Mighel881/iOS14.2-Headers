/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupIntentSearchMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * jsonData; 
@property (nonatomic,copy) NSString * metadataType; 
@property (assign,nonatomic) long long version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentSearchMetadata;
+(id)intentSearchMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)jsonData;
-(id)groupIdentifier;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(id)encodedClassName;
-(void)setJsonData:(NSString *)arg1 ;
-(void)setMetadataType:(NSString *)arg1 ;
-(NSString *)metadataType;
@end

