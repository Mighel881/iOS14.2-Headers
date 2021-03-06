/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPUITableCellConfigurationProtocol.h>

@class NSString, CPUITableCellAccessory, UIImage;

@interface CPUITableCellConfiguration : NSObject <CPUITableCellConfigurationProtocol> {

	BOOL _showExplicit;
	BOOL _shouldShowPlaybackProgress;
	BOOL _currentlyPlaying;
	BOOL _showActivityIndicator;
	BOOL _playingIndicatorLeadingSide;
	NSString* _text;
	NSString* _detailText;
	CPUITableCellAccessory* _accessory;
	UIImage* _image;
	double _playbackProgress;

}

@property (nonatomic,copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * detailText;                             //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) CPUITableCellAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL showExplicit;                               //@synthesize showExplicit=_showExplicit - In the implementation block
@property (assign,nonatomic) double playbackProgress;                         //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlaybackProgress;                 //@synthesize shouldShowPlaybackProgress=_shouldShowPlaybackProgress - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                           //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                      //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL playingIndicatorLeadingSide;                //@synthesize playingIndicatorLeadingSide=_playingIndicatorLeadingSide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(BOOL)arg4 accessory:(id)arg5 showActivityIndicator:(BOOL)arg6 showPlaybackProgress:(BOOL)arg7 playbackProgress:(double)arg8 currentlyPlaying:(BOOL)arg9 playingIndicatorLeadingSide:(BOOL)arg10 ;
+(id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(BOOL)arg4 accessory:(id)arg5 showActivityIndicator:(BOOL)arg6 showPlaybackProgress:(BOOL)arg7 playbackProgress:(double)arg8 currentlyPlaying:(BOOL)arg9 ;
-(void)setText:(NSString *)arg1 ;
-(CPUITableCellAccessory *)accessory;
-(void)setAccessory:(CPUITableCellAccessory *)arg1 ;
-(NSString *)text;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setPlaybackProgress:(double)arg1 ;
-(double)playbackProgress;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(NSString *)detailText;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(BOOL)currentlyPlaying;
-(void)setShowExplicit:(BOOL)arg1 ;
-(void)setShouldShowPlaybackProgress:(BOOL)arg1 ;
-(void)setPlayingIndicatorLeadingSide:(BOOL)arg1 ;
-(BOOL)showExplicit;
-(BOOL)shouldShowPlaybackProgress;
-(BOOL)playingIndicatorLeadingSide;
@end

