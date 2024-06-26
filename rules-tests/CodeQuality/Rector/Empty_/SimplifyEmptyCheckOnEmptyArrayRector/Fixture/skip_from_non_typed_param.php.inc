<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class SkipFromNonTypedParam
{
    /**
     * @param array $values
     */
    public function isEmptyArray($values): bool
    {
        return empty($values);
    }
}
