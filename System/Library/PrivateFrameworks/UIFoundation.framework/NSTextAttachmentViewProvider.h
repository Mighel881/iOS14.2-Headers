/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSTextLocation;
#import <UIFoundation/UIFoundation-Structs.h>
@class UIView, NSTextContainer, NSTextAttachment, NSLayoutManager;

@interface NSTextAttachmentViewProvider : NSObject {

	UIView* _view;
	unsigned long long _characterIndex;
	id<NSTextLocation> _location;
	NSTextContainer* _textContainer;
	BOOL _tracksTextAttachmentViewBounds;
	NSTextAttachment* _textAttachment;
	NSLayoutManager* _layoutManager;

}

@property (__weak) NSTextAttachment * textAttachment;                //@synthesize textAttachment=_textAttachment - In the implementation block
@property (__weak) NSLayoutManager * layoutManager;                  //@synthesize layoutManager=_layoutManager - In the implementation block
@property (readonly) unsigned long long characterIndex;              //@synthesize characterIndex=_characterIndex - In the implementation block
@property (readonly) id<NSTextLocation> location;                    //@synthesize location=_location - In the implementation block
@property (retain) UIView * view; 
@property (assign) BOOL tracksTextAttachmentViewBounds;              //@synthesize tracksTextAttachmentViewBounds=_tracksTextAttachmentViewBounds - In the implementation block
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(UIView *)view;
-(id<NSTextLocation>)location;
-(void)setView:(UIView *)arg1 ;
-(NSLayoutManager *)layoutManager;
-(BOOL)tracksTextAttachmentViewBounds;
-(CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 position:(CGPoint)arg5 ;
-(void)setTextAttachment:(NSTextAttachment *)arg1 ;
-(id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 location:(id)arg3 ;
-(void)setTracksTextAttachmentViewBounds:(BOOL)arg1 ;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(void)removeView;
-(void)loadView;
-(NSTextAttachment *)textAttachment;
-(unsigned long long)characterIndex;
-(void)dealloc;
@end
