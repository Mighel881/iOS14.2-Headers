/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSArray, NSString;


@protocol APPCPromotableBaseContext
@property (readonly,nonatomic) NSUUID * identifier; 
@property (readonly,nonatomic) CGSize maxSize; 
@property (readonly,nonatomic) id<APPCPromotableContentDepiction> current; 
@property (readonly,nonatomic) NSArray * next; 
@property (readonly,nonatomic) NSArray * adjacent; 
@property (readonly,nonatomic) NSString * requestedAd; 
@required
-(NSArray *)next;
-(id<APPCPromotableContentDepiction>)current;
-(CGSize)maxSize;
-(NSUUID *)identifier;
-(NSArray *)adjacent;
-(NSString *)requestedAd;

@end
