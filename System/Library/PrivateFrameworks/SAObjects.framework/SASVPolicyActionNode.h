/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, SASVSpeechMetadata;

@interface SASVPolicyActionNode : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSString * confirmationType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SASVSpeechMetadata * speechMetadata; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyActionNode;
+(id)policyActionNodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)children;
-(id)groupIdentifier;
-(void)setConfirmationType:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setType:(NSString *)arg1 ;
-(NSString *)confirmationType;
-(NSString *)name;
-(SASVSpeechMetadata *)speechMetadata;
-(void)setSpeechMetadata:(SASVSpeechMetadata *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
@end
