/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMLParserDelegate.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate> {

	CALayer* _animatedGlyphLayer;
	CAStateController* _stateController;
	NSMutableArray* _barLayers;
	CALayer* _platterLayer;
	BOOL _highlighted;
	unsigned _playbackState;
	NSString* _stateName;

}

@property (nonatomic,copy) NSString * stateName;                                 //@synthesize stateName=_stateName - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                             //@synthesize playbackState=_playbackState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classSubstitions;
-(void)setPlaybackState:(unsigned)arg1 ;
-(unsigned)playbackState;
-(void)_updateColors;
-(void)setStateName:(NSString *)arg1 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_handleGlyphLayerDidLoad:(id)arg1 ;
-(BOOL)isHighlighted;
-(NSString *)stateName;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithCAML:(id)arg1 ;
@end

