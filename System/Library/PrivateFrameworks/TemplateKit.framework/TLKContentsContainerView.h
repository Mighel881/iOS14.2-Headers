/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKContentsContainerView : TLKStackView {

	NSMutableArray* _contentsViews;

}

@property (nonatomic,retain) NSMutableArray * contentsViews;              //@synthesize contentsViews=_contentsViews - In the implementation block
-(id)init;
-(void)updateWithContents:(id)arg1 ;
-(NSMutableArray *)contentsViews;
-(void)setContentsViews:(NSMutableArray *)arg1 ;
@end

