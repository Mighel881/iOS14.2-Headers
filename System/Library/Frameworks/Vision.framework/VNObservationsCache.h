/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface VNObservationsCache : NSObject {

	NSMapTable* _observationsCache;

}
-(id)observationsForRequest:(id)arg1 testedKeyHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)setObservations:(id)arg1 forKey:(id)arg2 ;
-(id)observationsForKey:(id)arg1 ;
@end
