/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface TeaUI.BlueprintViewportMonitor : NSObject <UICollectionViewDelegate, UITableViewDelegate, TUMotionManagerObserver> {

	 observers;
	 options;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(id)init;
@end
