/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MDLObjectContainerComponent <MDLComponent,NSFastEnumeration>
@property (readonly) unsigned long long count; 
@property (nonatomic,retain,readonly) NSArray * objects; 
@required
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(NSArray *)objects;
-(unsigned long long)count;
-(void)addObject:(id)arg1;
-(void)removeObject:(id)arg1;

@end
