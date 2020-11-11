/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class FMAccuracyOverlay, UIColor, UIImage, NSString;


@protocol FMAnnotation <NSObject>
@property (nonatomic,retain) FMAccuracyOverlay * overlay; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (assign,nonatomic) BOOL isBorderEnabled; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(NSString *)subtitle;
-(NSString *)title;

@required
-(FMAccuracyOverlay *)overlay;
-(void)setTintColor:(id)arg1;
-(void)setHorizontalAccuracy:(double)arg1;
-(CLLocationCoordinate2D)coordinate;
-(double)horizontalAccuracy;
-(BOOL)isThisDevice;
-(UIColor *)tintColor;
-(void)setOverlay:(id)arg1;
-(BOOL)hasKnownLocation;
-(void)setIsBorderEnabled:(BOOL)arg1;
-(void)setSmallAnnotationIcon:(id)arg1;
-(void)setLargeAnnotationIcon:(id)arg1;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1;
-(BOOL)isBorderEnabled;
-(UIImage *)largeAnnotationIcon;
-(UIImage *)smallAnnotationIcon;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(id)arg1;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(id)arg1;

@end
