/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUIImage.h>

@protocol CNCancelable;
@class NSArray, NSString;

@interface SearchUIAvatarImage : SearchUIImage {

	NSArray* _contactIdentifiers;
	NSString* _letters;
	id<CNCancelable> _renderingToken;

}

@property (nonatomic,copy) NSArray * contactIdentifiers;                   //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * letters;                           //@synthesize letters=_letters - In the implementation block
@property (nonatomic,retain) id<CNCancelable> renderingToken;              //@synthesize renderingToken=_renderingToken - In the implementation block
+(id)avatarImageRenderer;
-(unsigned long long)hash;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(void)setLetters:(NSString *)arg1 ;
-(void)setDefaultSizeIfNecessary;
-(void)setRenderingToken:(id<CNCancelable>)arg1 ;
-(id)initWithMonogramImage:(id)arg1 ;
-(id)initWithContactImage:(id)arg1 ;
-(id<CNCancelable>)renderingToken;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)defaultCornerRoundingStyle;
-(NSString *)letters;
-(NSArray *)contactIdentifiers;
@end

