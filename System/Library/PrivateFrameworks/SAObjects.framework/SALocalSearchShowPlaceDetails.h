/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SALocalSearchShowPlaceDetails : SABaseClientBoundCommand

@property (assign,nonatomic) long long itemIndex; 
+(id)showPlaceDetails;
+(id)showPlaceDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setItemIndex:(long long)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(long long)itemIndex;
@end

