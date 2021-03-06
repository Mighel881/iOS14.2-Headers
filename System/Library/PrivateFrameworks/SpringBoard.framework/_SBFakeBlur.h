/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _SBFakeBlur <NSObject>
@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer; 
@property (assign,nonatomic) double zoomScale; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@required
-(void)setZoomScale:(double)arg1;
-(void)setTransformOptions:(unsigned long long)arg1;
-(void)setFullscreen:(BOOL)arg1;
-(void)offsetWallpaperBy:(CGPoint)arg1;
-(BOOL)isFullscreen;
-(double)zoomScale;
-(void)setObserver:(id)arg1;
-(long long)effectiveStyle;
-(unsigned long long)transformOptions;
-(id<_SBFakeBlurObserver>)observer;
-(void)requestStyle:(long long)arg1;

@end

