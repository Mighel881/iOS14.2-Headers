/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary;

@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {

	NSDictionary* _defaultValues;

}
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(BOOL)arg3 ;
-(void)dealloc;
@end

