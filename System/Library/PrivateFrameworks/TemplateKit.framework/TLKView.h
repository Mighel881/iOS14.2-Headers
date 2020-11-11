/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TLKObserver.h>
#import <libobjc.A.dylib/TLKObservable.h>

@protocol TLKObserver;
@class UIView, TLKAppearance, NSString;

@interface TLKView : UIView <TLKObserver, TLKObservable> {

	id<TLKObserver> observer;
	long long batchUpdateCount;
	UIView* _leadingTextView;
	UIView* _contentView;
	TLKAppearance* _tlkAppearance;

}

@property (readonly) UIView * leadingTextView;                           //@synthesize leadingTextView=_leadingTextView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) TLKAppearance * tlkAppearance;              //@synthesize tlkAppearance=_tlkAppearance - In the implementation block
@property (readonly) BOOL usesDefaultLayoutMargins; 
@property (assign,nonatomic) long long batchUpdateCount; 
@property (__weak) id<TLKObserver> observer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(void)makeContainerShadowCompatible:(id)arg1 ;
+(void)enableLightKeylineStroke:(BOOL)arg1 forView:(id)arg2 ;
+(void)enableShadow:(BOOL)arg1 forView:(id)arg2 ;
+(UIEdgeInsets)defaultLayoutMargins;
-(void)layoutMarginsDidChange;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(id)init;
-(id)viewForFirstBaselineLayout;
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(TLKAppearance *)tlkAppearance;
-(UIEdgeInsets)defaultBaselineRelativeLayoutMargins;
-(void)disableUnbatchedUpdates;
-(void)setTlkAppearance:(TLKAppearance *)arg1 ;
-(long long)batchUpdateCount;
-(void)setBatchUpdateCount:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(id<TLKObserver>)observer;
-(UIEdgeInsets)effectiveLayoutMargins;
-(UIView *)contentView;
-(void)propertiesDidChange;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultLayoutMargins;
-(UIView *)leadingTextView;
-(void)setContentView:(UIView *)arg1 ;
@end
