/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject {

	NSArray* _algorithms;

}
-(BOOL)supportsAlgorithm:(CFStringRef)arg1 ;
-(id)initWithAlgorithmsArray:(id)arg1 ;
-(BOOL)isAlgorithm:(CFStringRef)arg1 ;
@end
