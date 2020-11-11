/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ISImageDescriptor.h>

@class NSString;

@interface ISSymbolImageDescriptor : NSObject <ISImageDescriptor> {

	double _pointSize;
	double _scale;
	unsigned long long _size;
	long long _weight;

}

@property (assign,nonatomic) double pointSize;                      //@synthesize pointSize=_pointSize - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long weight;                      //@synthesize weight=_weight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)pointSize;
-(void)setSize:(unsigned long long)arg1 ;
-(long long)weight;
-(id)init;
-(unsigned long long)size;
-(void)setScale:(double)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(void)setPointSize:(double)arg1 ;
-(double)scale;
@end
