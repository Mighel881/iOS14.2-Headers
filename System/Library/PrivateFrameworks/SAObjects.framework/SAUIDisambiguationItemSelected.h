/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIDisambiguationItemSelected : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * selectedAceId; 
+(id)disambiguationItemSelected;
+(id)disambiguationItemSelectedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSString *)selectedAceId;
-(void)setSelectedAceId:(NSString *)arg1 ;
@end

