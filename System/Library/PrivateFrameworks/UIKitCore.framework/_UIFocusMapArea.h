/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIFocusMapArea <NSObject>
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) CGRect frame; 
@required
-(CGRect)frame;
-(BOOL)intersectsRect:(CGRect)arg1;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)intersectsRegion:(id)arg1;
-(id)intersectionWithRegion:(id)arg1;

@end
