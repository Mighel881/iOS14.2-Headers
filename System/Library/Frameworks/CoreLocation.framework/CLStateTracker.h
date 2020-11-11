/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreLocation/CoreLocation-Structs.h>
@interface CLStateTracker : NSObject {

	unsigned long long _handle;

}

@property (nonatomic,readonly) void* identifier; 
+(const char*)trackerStateTypeName;
+(unsigned long long)trackerStateSize;
-(id)initWithQueue:(id)arg1 ;
-(void*)identifier;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
-(void)dealloc;
@end
