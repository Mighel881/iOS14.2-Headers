/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipKit/TipKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class TPKContent, TPKContentView, NSString;

@interface TPKTipContentTableViewCell : UITableViewCell {

	TPKContent* _content;
	TPKContentView* _tipContentView;
	NSString* _systemLayoutSizeCacheKey;
	CGSize _systemLayoutSizeCacheSize;

}

@property (assign,nonatomic) CGSize systemLayoutSizeCacheSize;                 //@synthesize systemLayoutSizeCacheSize=_systemLayoutSizeCacheSize - In the implementation block
@property (nonatomic,retain) NSString * systemLayoutSizeCacheKey;              //@synthesize systemLayoutSizeCacheKey=_systemLayoutSizeCacheKey - In the implementation block
@property (nonatomic,retain) TPKContent * content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) TPKContentView * tipContentView;                  //@synthesize tipContentView=_tipContentView - In the implementation block
+(id)reuseIdentifier;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setContent:(TPKContent *)arg1 ;
-(TPKContentView *)tipContentView;
-(void)setTipContentView:(TPKContentView *)arg1 ;
-(void)prepareForReuse;
-(TPKContent *)content;
-(void)setSystemLayoutSizeCacheKey:(NSString *)arg1 ;
-(void)setSystemLayoutSizeCacheSize:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeCacheSize;
-(NSString *)systemLayoutSizeCacheKey;
-(void)setContent:(id)arg1 contentController:(id)arg2 ;
@end
