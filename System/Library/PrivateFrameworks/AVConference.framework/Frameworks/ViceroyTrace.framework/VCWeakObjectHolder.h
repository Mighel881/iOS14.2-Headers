/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ViceroyTrace/ViceroyTrace-Structs.h>
@interface VCWeakObjectHolder : NSObject {

	id _weakObject;
	OpaqueFigCFWeakReferenceRef _weakObjectWithoutAutoRelease;

}

@property (nonatomic,readonly) id strong; 
@property (nonatomic,readonly) OpaqueFigCFWeakReference* weak; 
+(id)weakObjectHolderWithObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)strong;
-(id)init;
-(OpaqueFigCFWeakReference*)weak;
-(void)dealloc;
@end
